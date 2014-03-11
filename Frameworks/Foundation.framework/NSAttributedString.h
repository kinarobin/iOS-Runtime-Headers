/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}

+ (id)_documentTypeForFileType:(id)arg1;
+ (id)_scrcStringWithFormat:(id)arg1 args:(void*)arg2;
+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)attributedStringWithAttachment:(id)arg1;
+ (id)attributedStringWithFormatAndAttributes:(id)arg1;
+ (id)attributedStringWithFormatAndAttributes:(id)arg1;
+ (id)pl_stringWithFormat:(id)arg1 defaultAttributes:(id)arg2 arguments:(id)arg3;
+ (id)pu_localizedAttributedStringForCommentWithCommenterFullName:(id)arg1 text:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)pu_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 streamName:(id)arg2 accepted:(BOOL)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)pu_localizedAttributedStringForLikesFromUser:(BOOL)arg1 orPersonFullName:(id)arg2 photoCount:(int)arg3 videoCount:(int)arg4 streamName:(id)arg5 defaultTextAttributes:(id)arg6 emphasizedTextAttributes:(id)arg7;
+ (id)pu_localizedAttributedStringForLikesFromUser:(BOOL)arg1 otherPeopleFullNames:(id)arg2 isVideo:(BOOL)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)pu_localizedAttributedStringForLikesWithLikerCount:(int)arg1 isVideo:(BOOL)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)pu_localizedAttributedStringForPostWithSubjectFullName:(id)arg1 photoCount:(int)arg2 videoCount:(int)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)pu_localizedAttributedStringForUserCommentWithText:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)pu_localizedAttributedStringForUserCreatingStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)pu_localizedAttributedStringForUserJoiningStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)pu_localizedAttributedStringForUserPostWithPhotoCount:(int)arg1 videoCount:(int)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)scrcPauseString;
+ (id)scrcSpaceString;
+ (id)scrcString;
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithFormat:(id)arg1;
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithLiteralString:(id)arg1;
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithString:(id)arg1;
+ (id)textFileTypes;
+ (id)textPasteboardTypes;
+ (id)textTypes;
+ (id)textUnfilteredFileTypes;
+ (id)textUnfilteredPasteboardTypes;
+ (id)textUnfilteredTypes;
+ (id)writableTextFileTypesForDocumentTypes;

- (id)MP_attributedStringByAddingAttributes:(id)arg1 toOccurrencesOfSubstring:(id)arg2 options:(unsigned int)arg3;
- (id)RTFDFileWrapperFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 documentAttributes:(id)arg2;
- (id)_RTFWithSelector:(SEL)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 documentAttributes:(id)arg3;
- (id)_UIKBStringWideAttributeValueForKey:(id)arg1;
- (BOOL)_atEndOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_atStartOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_documentFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (id)_initWithDOMRange:(id)arg1;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)_isStringDrawingTextStorage;
- (unsigned int)_lineBreakBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usesAlternativeBreaker:(BOOL)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2 completeRow:(BOOL*)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_readDocumentFragment:(id)arg1 fromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (BOOL)_scrcHasPauseCommaAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_scrcRangeOfFormatSpecifierWithIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_scrcRangeOfVanillaFormatSpecifier;
- (id)_ui_attributedStringWithOriginalFontAttributes;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scaledByScaleFactor:(float)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withTrackingAdjustment:(float)arg2;
- (id)_ui_fontsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)_ui_resolvedTextAlignment;
- (id)_ui_secureStringWithPointSize:(float)arg1;
- (id)_ui_synthesizeAttributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingDefaultAttributes:(id)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (BOOL)attribute:(id)arg1 existsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 numberOfRanges:(int)arg3 withString:(id)arg4;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)attributesAtIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { float x1; float x2; })arg1 options:(int)arg2 context:(id)arg3;
- (Class)classForCoder;
- (BOOL)containsAttachments;
- (BOOL)containsAttribute:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)dd_attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultLanguage;
- (id)description;
- (id)docFormatFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 documentAttributes:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })doubleClickAtIndex:(unsigned int)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })doubleClickAtIndex:(unsigned int)arg1;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 options:(int)arg2 context:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 options:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)fileWrapperFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)fontAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (int)itemNumberInTextList:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)length;
- (unsigned int)lineBreakBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)lineBreakByHyphenatingBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)nextWordFromIndex:(unsigned int)arg1 forward:(BOOL)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfTextBlock:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfTextList:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)rulerAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)scrcContainsPause;
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;
- (id)scrcStringByAppendingAttributedString:(id)arg1;
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (struct CGSize { float x1; float x2; })size;
- (id)string;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)trimmedString;

@end