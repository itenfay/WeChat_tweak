//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAppAuthTableViewCellData : NSObject
{
    _Bool _isBottomCell;
    unsigned long long _rowIndex;
    NSString *_appName;
    NSString *_appTypeDesc;
    NSString *_appScope;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBottomCell; // @synthesize isBottomCell=_isBottomCell;
@property(copy, nonatomic) NSString *appScope; // @synthesize appScope=_appScope;
@property(copy, nonatomic) NSString *appTypeDesc; // @synthesize appTypeDesc=_appTypeDesc;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) unsigned long long rowIndex; // @synthesize rowIndex=_rowIndex;

@end

