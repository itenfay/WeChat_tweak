//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MsgImgSearchPhashMemItem : NSObject
{
    _Bool _isCalcuateOK;
    NSString *_phashStr;
    NSString *_phashVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *phashVersion; // @synthesize phashVersion=_phashVersion;
@property(retain, nonatomic) NSString *phashStr; // @synthesize phashStr=_phashStr;
@property(nonatomic) _Bool isCalcuateOK; // @synthesize isCalcuateOK=_isCalcuateOK;

@end

