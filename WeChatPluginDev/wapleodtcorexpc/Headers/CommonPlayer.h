//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol CommonPlayerDelegate;

@interface CommonPlayer : NSObject
{
    id <CommonPlayerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CommonPlayerDelegate> m_delegate; // @synthesize m_delegate;
- (void)setNumberOfLoops:(long long)arg1;
- (double)duration;
- (_Bool)isPlaying;
- (void)setVolume:(float)arg1;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

@end

