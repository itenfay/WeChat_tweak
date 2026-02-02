//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJShootFaceGenderSwitchItem : NSObject
{
    NSString *_title;
    long long _faceGender;
}

- (void).cxx_destruct;
@property(nonatomic) long long faceGender; // @synthesize faceGender=_faceGender;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 faceGender:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

