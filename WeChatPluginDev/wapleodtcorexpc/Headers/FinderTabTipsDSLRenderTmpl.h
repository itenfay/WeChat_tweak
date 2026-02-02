//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderTabTipsDSLRenderTmpl_GlobalAttr, NSMutableArray;

@interface FinderTabTipsDSLRenderTmpl : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (_Bool)isTextEnableClientThumbnailNodeContent:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)containAbbreviationTextNodeAsOriginal:(_Bool)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *nodes; // @dynamic nodes;
@property(retain, nonatomic) FinderTabTipsDSLRenderTmpl_GlobalAttr *orignalAttr; // @dynamic orignalAttr;
@property(retain, nonatomic) FinderTabTipsDSLRenderTmpl_GlobalAttr *thumbnailAttr; // @dynamic thumbnailAttr;

@end

