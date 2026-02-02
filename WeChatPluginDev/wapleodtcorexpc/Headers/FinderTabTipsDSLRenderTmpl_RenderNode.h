//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderTabTipsDSLRenderTmpl_RenderNode_RenderAttr, FinderTabTipsDSLRenderTmpl_RenderNode_RenderContent;

@interface FinderTabTipsDSLRenderTmpl_RenderNode : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isValidTextNodeAsOriginal:(_Bool)arg1;
- (_Bool)isValidNodeAsOriginal:(_Bool)arg1;
- (_Bool)isAloneNodeAsOriginal:(_Bool)arg1 curIndex:(long long)arg2 mergedCapsuleAttr:(id)arg3;

// Remaining properties
@property(retain, nonatomic) FinderTabTipsDSLRenderTmpl_RenderNode_RenderAttr *attr; // @dynamic attr;
@property(retain, nonatomic) FinderTabTipsDSLRenderTmpl_RenderNode_RenderContent *content; // @dynamic content;
@property(nonatomic) int style; // @dynamic style;

@end

