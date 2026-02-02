//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BSTLExptConfig : NSObject
{
    _Bool _showDynamicCard;
    _Bool _showDynamicCardToast;
    _Bool _isControlGroup;
    unsigned int _renderMode;
    unsigned int _dataMode;
    unsigned int _exptShowOption;
    unsigned long long _resortSceneBitSwitch;
}

@property(nonatomic) unsigned long long resortSceneBitSwitch; // @synthesize resortSceneBitSwitch=_resortSceneBitSwitch;
@property(nonatomic) _Bool isControlGroup; // @synthesize isControlGroup=_isControlGroup;
@property(nonatomic) _Bool showDynamicCardToast; // @synthesize showDynamicCardToast=_showDynamicCardToast;
@property(nonatomic) _Bool showDynamicCard; // @synthesize showDynamicCard=_showDynamicCard;
@property(nonatomic) unsigned int exptShowOption; // @synthesize exptShowOption=_exptShowOption;
@property(nonatomic) unsigned int dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) unsigned int renderMode; // @synthesize renderMode=_renderMode;
- (id)description;
- (_Bool)isEqualToConfig:(id)arg1;
- (id)getExptExcludeMsgTypeArr;
- (_Bool)isExptNotShowRecoFlow;
- (_Bool)isExptNotShowFinderLiveBar;
- (_Bool)isExptNotShowRecCard;
- (_Bool)isExptNotShowAd;
- (_Bool)isExptOrControlGroup;

@end

