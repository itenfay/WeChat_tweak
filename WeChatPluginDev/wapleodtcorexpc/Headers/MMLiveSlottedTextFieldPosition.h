//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextPosition.h>

@interface MMLiveSlottedTextFieldPosition : UITextPosition
{
    long long _index;
}

+ (id)positionWithIndex:(long long)arg1;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

