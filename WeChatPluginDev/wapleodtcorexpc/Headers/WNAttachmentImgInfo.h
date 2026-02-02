//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RTEAttributeNode;

@interface WNAttachmentImgInfo
{
    RTEAttributeNode *_attribute;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RTEAttributeNode *attribute; // @synthesize attribute=_attribute;
- (id)getSightPath;
- (id)getImgPath;
- (_Bool)isGifMsg;
- (_Bool)isImgMsg;

@end

