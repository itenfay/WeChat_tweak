//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString, OMJAspectRatio, OMJFrameRate;

@interface OMCProject : NSObject
{
    SharedPtr_b444224d _backingProject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_b444224d backingProject; // @synthesize backingProject=_backingProject;
- (id)description;
- (id)saveToData;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) OMJFrameRate *frameRate;
@property(readonly, nonatomic) OMJAspectRatio *aspectRatio;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) long long segmentCount;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithBackingProject:(const void *)arg1;

@end

