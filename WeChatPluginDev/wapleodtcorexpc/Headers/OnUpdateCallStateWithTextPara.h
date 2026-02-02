//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OnUpdateCallStateWithTextPara : NSObject
{
    _Bool _isAccepted;
    _Bool _isEnd;
    _Bool _isErr;
    _Bool _isShowChargeAlert;
    _Bool _isShowFreeActicityNotSupport;
    _Bool _isMinmizeMode;
    unsigned int _errorlevel;
    NSString *_stateText;
    NSString *_errTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMinmizeMode; // @synthesize isMinmizeMode=_isMinmizeMode;
@property(nonatomic) _Bool isShowFreeActicityNotSupport; // @synthesize isShowFreeActicityNotSupport=_isShowFreeActicityNotSupport;
@property(nonatomic) _Bool isShowChargeAlert; // @synthesize isShowChargeAlert=_isShowChargeAlert;
@property(retain, nonatomic) NSString *errTitle; // @synthesize errTitle=_errTitle;
@property(nonatomic) unsigned int errorlevel; // @synthesize errorlevel=_errorlevel;
@property(nonatomic) _Bool isErr; // @synthesize isErr=_isErr;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) _Bool isAccepted; // @synthesize isAccepted=_isAccepted;
@property(retain, nonatomic) NSString *stateText; // @synthesize stateText=_stateText;

@end

