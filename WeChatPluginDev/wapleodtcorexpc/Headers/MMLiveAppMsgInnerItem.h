//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGroupLiveInfoItem;

@interface MMLiveAppMsgInnerItem : NSObject
{
    _Bool _useDefaultLiveName;
    unsigned long long _liveId;
    MMGroupLiveInfoItem *_liveInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMGroupLiveInfoItem *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) _Bool useDefaultLiveName; // @synthesize useDefaultLiveName=_useDefaultLiveName;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

