//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMomentsCompositorTabCellViewModel : NSObject
{
    _Bool _isSelected;
    NSString *_sectionId;
    NSString *_sectionTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
- (id)initWithSectionId:(id)arg1 sectionTitle:(id)arg2;

@end

