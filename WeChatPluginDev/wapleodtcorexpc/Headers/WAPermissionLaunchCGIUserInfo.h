//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAAppItemData;

@interface WAPermissionLaunchCGIUserInfo : NSObject
{
    _Bool _isFromBackground;
    _Bool _isSilentOpen;
    _Bool _isSheetMode;
    _Bool _isCustomLoading;
    unsigned int _enterScene;
    WAAppItemData *_appItem;
    NSString *_sessionId;
    long long _costTime;
    NSString *_migrateFromUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *migrateFromUsername; // @synthesize migrateFromUsername=_migrateFromUsername;
@property(nonatomic) long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) _Bool isCustomLoading; // @synthesize isCustomLoading=_isCustomLoading;
@property(nonatomic) _Bool isSheetMode; // @synthesize isSheetMode=_isSheetMode;
@property(nonatomic) _Bool isSilentOpen; // @synthesize isSilentOpen=_isSilentOpen;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isFromBackground; // @synthesize isFromBackground=_isFromBackground;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WAAppItemData *appItem; // @synthesize appItem=_appItem;

@end

