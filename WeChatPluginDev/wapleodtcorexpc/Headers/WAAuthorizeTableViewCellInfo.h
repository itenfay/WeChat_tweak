//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAuthorizeTableViewCellInfo : NSObject
{
    _Bool _isSelect;
    NSString *_iconUrl;
    NSString *_mainTitle;
    NSString *_subTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

