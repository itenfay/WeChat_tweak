//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface TouchDownView : UIView
{
    SEL callBack;
    id target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target;
@property(nonatomic) SEL callBack; // @synthesize callBack;

@end

