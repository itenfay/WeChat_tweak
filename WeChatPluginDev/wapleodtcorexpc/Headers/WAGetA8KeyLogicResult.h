//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAGetA8KeyLogicResult : NSObject
{
    long long _codeActionType;
    NSString *_weappUserName;
    NSString *_weappPagePath;
    NSString *_weappShareUrl;
    NSString *_fullUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fullUrl; // @synthesize fullUrl=_fullUrl;
@property(retain, nonatomic) NSString *weappShareUrl; // @synthesize weappShareUrl=_weappShareUrl;
@property(retain, nonatomic) NSString *weappPagePath; // @synthesize weappPagePath=_weappPagePath;
@property(retain, nonatomic) NSString *weappUserName; // @synthesize weappUserName=_weappUserName;
@property(nonatomic) long long codeActionType; // @synthesize codeActionType=_codeActionType;

@end

