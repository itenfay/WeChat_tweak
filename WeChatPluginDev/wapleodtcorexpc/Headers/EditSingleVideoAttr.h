//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EditSingleVideoAttr
{
    NSString *_assetURL;
    CDStruct_1b6d18a9 _originDuration;
    CDStruct_e83c9415 _editedTimeRange;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 editedTimeRange; // @synthesize editedTimeRange=_editedTimeRange;
@property(nonatomic) CDStruct_1b6d18a9 originDuration; // @synthesize originDuration=_originDuration;
@property(copy, nonatomic) NSString *assetURL; // @synthesize assetURL=_assetURL;
- (double)cropTimeDurationInSecond;
- (double)durationInSecond;
- (_Bool)isRangeEdited;
- (void)resetEditTimeRange;
- (CDStruct_e83c9415)originTimeRange;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

