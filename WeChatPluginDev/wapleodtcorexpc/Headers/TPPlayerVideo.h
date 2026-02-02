//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TPDrmMediaAsset;
@protocol TPPlayerVideoPrivateDelegate;

@interface TPPlayerVideo : NSObject
{
    long long _startPosUs;
    long long _skipEndPosUs;
    long long _businessID;
    NSString *_source;
    TPDrmMediaAsset *_drmAsset;
    NSMutableArray *_slices;
    id <TPPlayerVideoPrivateDelegate> _privateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TPPlayerVideoPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(retain, nonatomic) NSMutableArray *slices; // @synthesize slices=_slices;
@property(retain, nonatomic) TPDrmMediaAsset *drmAsset; // @synthesize drmAsset=_drmAsset;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long businessID; // @synthesize businessID=_businessID;
@property(nonatomic) long long skipEndPosUs; // @synthesize skipEndPosUs=_skipEndPosUs;
@property(nonatomic) long long startPosUs; // @synthesize startPosUs=_startPosUs;
- (id)initWithString:(id)arg1;
- (id)description;
@property(readonly, nonatomic) long long durationUs; // @dynamic durationUs;
- (void)removeAllSlices;
- (void)enumerateSlicesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeSlice:(id)arg1;
- (void)insertSlice:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendSlice:(id)arg1;
- (_Bool)containsURL:(id)arg1;
- (unsigned long long)sliceCount;
- (unsigned long long)indexOfSlice:(id)arg1;
- (id)sliceAtIndex:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlices:(id)arg1;
- (id)initWithSlice:(id)arg1;
- (void)dealloc;
- (id)init;

@end

