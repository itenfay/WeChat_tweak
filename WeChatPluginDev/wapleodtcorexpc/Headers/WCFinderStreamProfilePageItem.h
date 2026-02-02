//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderStreamProfilePageModel;

@interface WCFinderStreamProfilePageItem : NSObject
{
    NSString *_title;
    WCFinderStreamProfilePageModel *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamProfilePageModel *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

