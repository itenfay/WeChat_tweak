//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WebMailUtil
{
}

+ (id)ConvertMailNode2HTMLContent:(id)arg1;
+ (id)ConvertMailNode2NativeHTMLContent:(id)arg1 imageIndex:(unsigned long long *)arg2 imageAttachmentList:(id)arg3;
+ (id)SystemConvertMailNode2HTMLContent:(id)arg1 withImgIndex:(int)arg2;
+ (id)MailcompressImage:(id)arg1;
+ (id)SystemConvertMailNodeList2HTMLContent:(id)arg1;
+ (id)ConvertMailNodeList2NativeHTMLContent:(id)arg1 imageAttachmentList:(id)arg2;

@end

