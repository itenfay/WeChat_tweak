//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol WABGAudioMinimizationHostPlayerProtocol;

@interface WABGAudioMinimizationItemInfo : NSObject
{
    _Bool _isGameApp;
    unsigned int _appDebugMode;
    unsigned int _enterScene;
    NSString *_hostId;
    id _hostView;
    long long _state;
    NSString *_appId;
    NSString *_appUsrName;
    NSString *_appDisplayName;
    UIImage *_coverImage;
    long long _style;
    id <WABGAudioMinimizationHostPlayerProtocol> _hostPlayer;
    CDUnknownBlockType _operateAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType operateAction; // @synthesize operateAction=_operateAction;
@property(nonatomic) __weak id <WABGAudioMinimizationHostPlayerProtocol> hostPlayer; // @synthesize hostPlayer=_hostPlayer;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) _Bool isGameApp; // @synthesize isGameApp=_isGameApp;
@property(nonatomic) unsigned int appDebugMode; // @synthesize appDebugMode=_appDebugMode;
@property(retain, nonatomic) NSString *appDisplayName; // @synthesize appDisplayName=_appDisplayName;
@property(retain, nonatomic) NSString *appUsrName; // @synthesize appUsrName=_appUsrName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) NSString *hostId; // @synthesize hostId=_hostId;

@end

