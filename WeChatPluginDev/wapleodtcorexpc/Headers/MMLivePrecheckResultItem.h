//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLivePrecheckResultItem : NSObject
{
    _Bool _isFail;
    _Bool _isRealname;
    _Bool _cannotJumpVerify;
    NSString *_title;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cannotJumpVerify; // @synthesize cannotJumpVerify=_cannotJumpVerify;
@property(nonatomic) _Bool isRealname; // @synthesize isRealname=_isRealname;
@property(nonatomic) _Bool isFail; // @synthesize isFail=_isFail;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

