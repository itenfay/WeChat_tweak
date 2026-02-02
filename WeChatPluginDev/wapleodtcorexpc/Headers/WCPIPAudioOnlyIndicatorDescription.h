//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPIPAudioOnlyIndicatorDescription
{
    NSString *_leftIcon;
    NSString *_rightIcon;
    double _leftRightIconTextInset;
    struct CGSize _leftRightIconSize;
}

- (void).cxx_destruct;
@property(nonatomic) double leftRightIconTextInset; // @synthesize leftRightIconTextInset=_leftRightIconTextInset;
@property(nonatomic) struct CGSize leftRightIconSize; // @synthesize leftRightIconSize=_leftRightIconSize;
@property(retain, nonatomic) NSString *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) NSString *leftIcon; // @synthesize leftIcon=_leftIcon;
- (_Bool)isEqual:(id)arg1;
- (id)initWithText:(id)arg1 leftIcon:(id)arg2 rightIcon:(id)arg3;

@end

