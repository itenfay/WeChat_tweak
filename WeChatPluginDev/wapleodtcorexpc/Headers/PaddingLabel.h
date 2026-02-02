//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class NSString;

@interface PaddingLabel : UILabel
{
    unsigned long long collisionType;
    double _padding;
}

@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long collisionType; // @synthesize collisionType;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

