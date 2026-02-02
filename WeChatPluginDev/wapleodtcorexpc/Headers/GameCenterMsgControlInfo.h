//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameCenterMsgControlInfo : NSObject
{
    _Bool _notInMsgCenter;
    int _controlFlag;
    int _filterFlag;
    unsigned int _createTime;
    unsigned int _expiredTime;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) _Bool notInMsgCenter; // @synthesize notInMsgCenter=_notInMsgCenter;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int filterFlag; // @synthesize filterFlag=_filterFlag;
@property(nonatomic) int controlFlag; // @synthesize controlFlag=_controlFlag;
- (_Bool)canClickMsgCenterCellSource;
- (_Bool)shouldShowMsgCenterCellSource;
- (_Bool)shouldShowFindFriendEntry;

@end

