//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MVVideoTransitionResourceConfig : NSObject
{
    NSArray *_transitionConfigArr;
}

@property(retain, nonatomic) NSArray *transitionConfigArr; // @synthesize transitionConfigArr=_transitionConfigArr;
- (id)initFromJson:(id)arg1;

@end

