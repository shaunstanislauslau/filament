/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TNT_FILAMAT_MATERIAL_GLSL_CHUNK_H
#define TNT_FILAMAT_MATERIAL_GLSL_CHUNK_H

#include <vector>

#include "Chunk.h"
#include "GlslChunk.h"
#include "LineDictionary.h"
#include "ShaderEntry.h"

namespace filamat {

class MaterialGlslChunk final : public GlslChunk<GlslEntry> {
public:
    MaterialGlslChunk(const std::vector<GlslEntry> &entries, LineDictionary &dictionary);
    ~MaterialGlslChunk() = default;
protected:
    virtual const char* getShaderText(size_t entryIndex) const override;
    virtual void writeEntryAttributes(size_t entryIndex, Flattener& f) override;
};

} // namespace filamat
#endif // TNT_FILAMAT_GLSL_CHUNK_H
