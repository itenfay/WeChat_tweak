//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdSubscriptionHeadInfo : NSObject
{
    NSString *_headImageUrl;
    NSString *_nickname;
}

+ (id)fetchDefaultSubscriptionHeadInfoForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;

@end

