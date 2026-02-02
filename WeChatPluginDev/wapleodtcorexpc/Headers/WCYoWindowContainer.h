//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol WCYoWindowDelegate;

@interface WCYoWindowContainer : NSObject
{
    NSObject<WCYoWindowDelegate> *_yoWindowDelegate;
}

@property(nonatomic) __weak NSObject<WCYoWindowDelegate> *yoWindowDelegate; // @synthesize yoWindowDelegate=_yoWindowDelegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

