//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ImageTranslateDetectInfo : NSObject
{
    _Bool _isResultOK;
    unsigned int _result;
    unsigned int _targetRate;
}

+ (id)genDetectInfoWithResultError;
@property(nonatomic) unsigned int targetRate; // @synthesize targetRate=_targetRate;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(nonatomic) _Bool isResultOK; // @synthesize isResultOK=_isResultOK;

@end

