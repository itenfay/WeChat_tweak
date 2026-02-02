//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class Announcement, NSString;

@interface AnnouncementCache : NSObject
{
    _Bool _clicked;
    unsigned int _endTimestamp;
    Announcement *_announcement;
}

+ (void)initialize;
+ (void)PBArrayAdd_endTimestamp;
+ (void)PBArrayAdd_clicked;
+ (void)PBArrayAdd_announcement;
- (void).cxx_destruct;
@property(nonatomic) unsigned int endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) _Bool clicked; // @synthesize clicked=_clicked;
@property(retain, nonatomic) Announcement *announcement; // @synthesize announcement=_announcement;
- (_Bool)outOfDate;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

