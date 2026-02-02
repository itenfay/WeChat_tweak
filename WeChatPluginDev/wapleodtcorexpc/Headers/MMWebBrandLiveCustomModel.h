//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebBrandLiveCustomModel : NSObject
{
    int _bizType;
    NSString *_brandUsername;
    NSString *_reportStr;
    NSString *_byPassInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *reportStr; // @synthesize reportStr=_reportStr;
@property(retain, nonatomic) NSString *brandUsername; // @synthesize brandUsername=_brandUsername;

@end

