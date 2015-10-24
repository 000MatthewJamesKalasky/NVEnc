//  -----------------------------------------------------------------------------------------
//    NVEnc by rigaya
//  -----------------------------------------------------------------------------------------
//   �\�[�X�R�[�h�ɂ���
//   �E���ۏ؂ł��B
//   �E�{�\�[�X�R�[�h���g�p�������Ƃɂ�邢���Ȃ鑹�Q�E�g���u���ɂ���rigaya�͐ӔC�𕉂��܂���B
//   �ȏ�ɗ������Ē�����ꍇ�A�{�\�[�X�R�[�h�̎g�p�A�����A���ρA�ĔЕz���s���Ē����č\���܂���B
//  -----------------------------------------------------------------------------------------

#ifndef _AUO_VERSION_H_
#define _AUO_VERSION_H_

#include "NVEncVersion.h"

#define AUO_VERSION          VER_FILEVERSION
#define AUO_VERSION_STR      VER_STR_FILEVERSION
#define AUO_NAME_WITHOUT_EXT "NVEnc"
#define AUO_NAME             "NVEnc.auo"
#define AUO_NAME_W          L"NVEnc.auo"
#define AUO_FULL_NAME        "�g�� NVEnc �o��"
#define AUO_VERSION_NAME     "�g�� NVEnc �o�� " AUO_VERSION_STR
#define AUO_VERSION_INFO     "�g�� NVEnc �o�� " AUO_VERSION_STR " by rigaya"
#define AUO_EXT_FILTER       "All Support Formats (*.*)\0*.mp4;*.mkv;*.264;*.mp4\0mp4 file (*.mp4)\0*.mp4\0mkv file (*.mkv)\0*.mkv\0raw file (*.264)\0*.264\0"

#ifdef DEBUG
#define VER_DEBUG   VS_FF_DEBUG
#define VER_PRIVATE VS_FF_PRIVATEBUILD
#else
#define VER_DEBUG   0
#define VER_PRIVATE 0
#endif

#define VER_STR_COMMENTS         AUO_FULL_NAME
#define VER_STR_COMPANYNAME      ""
#define VER_STR_FILEDESCRIPTION  AUO_FULL_NAME
#define VER_STR_INTERNALNAME     AUO_FULL_NAME
#define VER_STR_ORIGINALFILENAME AUO_NAME
#define VER_STR_LEGALCOPYRIGHT   "�g�� NVEnc �o�� by rigaya"
#define VER_STR_PRODUCTNAME      "NVEnc"
#define VER_PRODUCTVERSION       VER_FILEVERSION
#define VER_STR_PRODUCTVERSION   VER_STR_FILEVERSION

#endif //_AUO_VERSION_H_
