//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFinderFeedContentVM;

@interface WCFinderCommentLinkClickInfo : NSObject
{
    long long _type;
    WCFinderFeedContentVM *_contentVM;
    NSMutableDictionary *_userInfo;
    NSString *_url;
}

+ (id)infoFromTextLinkUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

