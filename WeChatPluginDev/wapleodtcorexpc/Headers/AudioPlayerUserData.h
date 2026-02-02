//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface AudioPlayerUserData : NSObject
{
    unsigned int _audioid;
    int _lastRecordTime;
    CMessageWrap *_msgWrap;
}

- (void).cxx_destruct;
@property(retain) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property int lastRecordTime; // @synthesize lastRecordTime=_lastRecordTime;
@property unsigned int audioid; // @synthesize audioid=_audioid;

@end

