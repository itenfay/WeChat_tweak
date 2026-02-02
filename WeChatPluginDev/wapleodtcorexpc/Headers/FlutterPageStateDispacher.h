//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFlutterHybridNavPageState;

@interface FlutterPageStateDispacher : NSObject
{
    MMFlutterHybridNavPageState *_pageState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFlutterHybridNavPageState *pageState; // @synthesize pageState=_pageState;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;

@end

