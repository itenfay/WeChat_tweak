//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicMVTrackItemLocalPic : NSObject
{
    NSString *_localId;
    NSString *_localPicPath;
    NSString *_picVideoPath;
    NSString *_picVideoThumbPath;
}

+ (void)initialize;
+ (void)PBArrayAdd_picVideoThumbPath;
+ (void)PBArrayAdd_picVideoPath;
+ (void)PBArrayAdd_localPicPath;
+ (void)PBArrayAdd_localId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *picVideoThumbPath; // @synthesize picVideoThumbPath=_picVideoThumbPath;
@property(retain, nonatomic) NSString *picVideoPath; // @synthesize picVideoPath=_picVideoPath;
@property(retain, nonatomic) NSString *localPicPath; // @synthesize localPicPath=_localPicPath;
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

