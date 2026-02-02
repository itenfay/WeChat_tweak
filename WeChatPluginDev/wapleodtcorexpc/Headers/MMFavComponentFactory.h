//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFavComponentFactory : NSObject
{
}

+ (id)getAuthorNameWith:(id)arg1;
+ (id)getLogoImageWith:(id)arg1;
+ (void)getIconWithFavItem:(id)arg1 FavData:(id)arg2 DataFmt:(id)arg3 ImageComponentData:(id)arg4;
+ (void)configBaselineComData:(id)arg1 withFavItem:(id)arg2 showDataSize:(_Bool)arg3 cellStyle:(unsigned long long)arg4;
+ (void)newConfigNoteComData:(id)arg1 withFavItem:(id)arg2 cellStyle:(unsigned long long)arg3;
+ (void)getRecordTextComponentData:(id)arg1 WithItem:(id)arg2;
+ (void)configTextComData:(id)arg1 withFavItem:(id)arg2 cellStyle:(unsigned long long)arg3;
+ (void)configImageComData:(id)arg1 withFavItem:(id)arg2;
+ (id)genImageComponentDataFrom:(id)arg1;
+ (id)getFavNoteTitle:(id)arg1;
+ (id)getDataThumbPath:(id)arg1 largeImage:(_Bool)arg2;
+ (id)convertVoiceDurationToStrInDigits:(int)arg1;
+ (id)convertVoiceDurationToStr:(unsigned int)arg1;
+ (int)dataEnumToItemEnum:(int)arg1;
+ (double)heightForItemDataField:(id)arg1 inItem:(id)arg2 isMultiSelect:(_Bool)arg3 cellStyle:(unsigned long long)arg4;
+ (id)createComponentByItemDataField:(id)arg1 inItem:(id)arg2 cellStyle:(unsigned long long)arg3 delegate:(id)arg4;
+ (id)tryNeedConvertToItemWithData:(id)arg1 inItem:(id)arg2;
+ (void)getFavNoteCellTitleAndDesc:(id)arg1 outTitle:(id *)arg2 outDesc:(id *)arg3;
+ (id)getFavTextCellText:(id)arg1;
+ (id)createComponentByFavItem:(id)arg1 showDataSize:(_Bool)arg2 cellStyle:(unsigned long long)arg3 delegate:(id)arg4;
+ (double)heightForFavItem:(id)arg1 isMultiSelect:(_Bool)arg2 cellStyle:(unsigned long long)arg3;
+ (double)heightForFavItem:(id)arg1 cellStyle:(unsigned long long)arg2;

@end

