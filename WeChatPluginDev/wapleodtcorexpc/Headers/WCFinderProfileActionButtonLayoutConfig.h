//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCFinderProfileActionButtonLayoutConfig : NSObject
{
    Class _btnCls;
    CDUnknownBlockType _config;
    long long _lineConfig;
}

@property(nonatomic) long long lineConfig; // @synthesize lineConfig=_lineConfig;
@property(copy, nonatomic) CDUnknownBlockType config; // @synthesize config=_config;
@property(retain, nonatomic) Class btnCls; // @synthesize btnCls=_btnCls;

@end
