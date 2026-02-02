//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@interface WAPerformanceLabel : UILabel
{
    UILabel *_valueLabel;
    long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)setValue:(id)arg1;
- (void)setText:(id)arg1 value:(id)arg2;

@end

