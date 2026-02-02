//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MMFinderLiveAudienceReportContext : NSObject
{
    NSDictionary *_audienceEnterActionResultDict;
    unsigned long long _homePageContainerType;
    NSString *_pullCommentScene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pullCommentScene; // @synthesize pullCommentScene=_pullCommentScene;
@property(nonatomic) unsigned long long homePageContainerType; // @synthesize homePageContainerType=_homePageContainerType;
@property(retain, nonatomic) NSDictionary *audienceEnterActionResultDict; // @synthesize audienceEnterActionResultDict=_audienceEnterActionResultDict;

@end

