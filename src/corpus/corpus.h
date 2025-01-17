/*******************************************************************************
 * This file is part of Tihu.
 *
 * Tihu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tihu is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tihu.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contributor(s):
 *    Mostafa Sedaghat Joo (mostafa.sedaghat@gmail.com)
 *
 *******************************************************************************/
#ifndef __TIHU__CORPUS_H
#define __TIHU__CORPUS_H

#pragma once

#include "word.h"

class CCorpus {
  public:
    CCorpus();
    CCorpus(const std::string &text, int offset);

    void SetText(const std::string &text, int offset);
    const std::string &GetText() const;
    int GetOffset() const;

    void AddWord(CWordPtr &word);

    const CWordPtr &GetLastWord() const; //// todo: can remove them?
    const CWordPtr &GetFirstWord() const;

    CWordList &GetWordList();

    size_t Size() const;
    bool IsEmpty() const;
    void Clear();

    std::string ToXml() const;
    std::string ToTxt() const;

    void Dump(const std::string &filename) const;

  protected:
    std::string Text;
    int Offset;
    CWordList WordList;
};

#endif
