//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicMVTrackItemLocalVideo : NSObject
{
    unsigned int _clipTimeOffsetMs;
    unsigned int _clipTimeLengthMs;
    NSString *_localId;
    NSString *_localVideoPath;
    NSString *_localThumbPath;
}

+ (void)initialize;
+ (void)PBArrayAdd_localThumbPath;
+ (void)PBArrayAdd_localVideoPath;
+ (void)PBArrayAdd_clipTimeLengthMs;
+ (void)PBArrayAdd_clipTimeOffsetMs;
+ (void)PBArrayAdd_localId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localThumbPath; // @synthesize localThumbPath=_localThumbPath;
@property(copy, nonatomic) NSString *localVideoPath; // @synthesize localVideoPath=_localVideoPath;
@property(nonatomic) unsigned int clipTimeLengthMs; // @synthesize clipTimeLengthMs=_clipTimeLengthMs;
@property(nonatomic) unsigned int clipTimeOffsetMs; // @synthesize clipTimeOffsetMs=_clipTimeOffsetMs;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

