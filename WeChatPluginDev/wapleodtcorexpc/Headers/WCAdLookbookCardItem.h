//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo, WCMediaItem;

@interface WCAdLookbookCardItem : NSObject
{
    NSString *_title;
    WCMediaItem *_mediaItem;
    WCAdCardBtnInfo *_clickActionInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *clickActionInfo; // @synthesize clickActionInfo=_clickActionInfo;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

