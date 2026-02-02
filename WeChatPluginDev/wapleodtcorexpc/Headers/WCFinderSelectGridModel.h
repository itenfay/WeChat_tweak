//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSelectGridModel : NSObject
{
    _Bool _isAllFlag;
    _Bool _isSelect;
    NSString *_content;
    long long _flag;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) _Bool isAllFlag; // @synthesize isAllFlag=_isAllFlag;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;

@end

