//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface OMJTextSegment
{
    struct SharedPtr<XMJTextSegment> _backingTextSegment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (_Bool)setSpatialInfo:(id)arg1 shouldCommit:(_Bool)arg2;
- (id)spatialInfo;
- (void)updateTextStyles:(id)arg1 layerStyles:(id)arg2 shouldCommit:(_Bool)arg3;
- (id)layerStyles;
- (id)textStyles;
- (_Bool)updataText:(id)arg1 shouldCommit:(_Bool)arg2;
- (id)text;
- (id)initWithBackingSegment:(const void *)arg1;

@end

