//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CustomMMWebImageView : NSObject
{
    NSString *_taskKey;
}

@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (void)removeFromSuperview;
- (void)willMoveToSuperview:(id)arg1;

@end

