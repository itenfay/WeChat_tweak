//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface StoreEmotionAllListReportInfo : NSObject
{
    NSString *_sessionID;
    NSString *_designerUin;
    long long _pageScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long pageScene; // @synthesize pageScene=_pageScene;
@property(retain, nonatomic) NSString *designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;

@end

