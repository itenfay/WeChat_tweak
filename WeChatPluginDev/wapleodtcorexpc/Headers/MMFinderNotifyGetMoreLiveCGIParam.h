//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClientStatus, NSArray, NSData, NSString;

@interface MMFinderNotifyGetMoreLiveCGIParam : NSObject
{
    float _longitude;
    float _latitude;
    unsigned int _noticeType;
    NSString *_reportExtInfo;
    unsigned long long _objectID;
    NSData *_lastBuffer;
    FinderClientStatus *_status;
    NSArray *_objectIDArray;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int noticeType; // @synthesize noticeType=_noticeType;
@property(retain, nonatomic) NSArray *objectIDArray; // @synthesize objectIDArray=_objectIDArray;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) FinderClientStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;

@end

