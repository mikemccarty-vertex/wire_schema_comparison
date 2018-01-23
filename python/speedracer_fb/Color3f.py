# automatically generated by the FlatBuffers compiler, do not modify

# namespace: speedracer_fb

import flatbuffers

class Color3f(object):
    __slots__ = ['_tab']

    # Color3f
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Color3f
    def R(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # Color3f
    def G(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # Color3f
    def B(self): return self._tab.Get(flatbuffers.number_types.Float32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(8))

def CreateColor3f(builder, r, g, b):
    builder.Prep(4, 12)
    builder.PrependFloat32(b)
    builder.PrependFloat32(g)
    builder.PrependFloat32(r)
    return builder.Offset()
