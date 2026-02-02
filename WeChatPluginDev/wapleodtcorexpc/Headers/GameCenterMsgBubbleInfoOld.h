//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterMsgBubbleInfoOld : NSObject
{
    int _action;
    NSString *_iconUrl;
    NSString *_desc;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

