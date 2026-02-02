//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSetWarningWordingResult : NSObject
{
    unsigned long long _warnFlag;
    NSString *_warningWording;
    NSString *_selectWording;
    unsigned long long _tagType;
    NSString *_tagSecKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tagSecKey; // @synthesize tagSecKey=_tagSecKey;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *selectWording; // @synthesize selectWording=_selectWording;
@property(copy, nonatomic) NSString *warningWording; // @synthesize warningWording=_warningWording;
@property(nonatomic) unsigned long long warnFlag; // @synthesize warnFlag=_warnFlag;

@end

