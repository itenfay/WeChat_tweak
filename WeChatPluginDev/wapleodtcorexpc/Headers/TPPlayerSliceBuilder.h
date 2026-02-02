//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPPlayerSlice;

@interface TPPlayerSliceBuilder : NSObject
{
    TPPlayerSlice *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerSlice *model; // @synthesize model=_model;
- (id)build;
- (id)setDurationUs:(long long)arg1;
- (long long)durationUs;
- (id)setHttpHeader:(id)arg1;
- (id)httpHeader;
- (id)setUrl:(id)arg1;
- (id)url;
- (id)init;

@end

